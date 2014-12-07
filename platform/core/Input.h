#include "Util.h"
#include "btVector2.h"
#include <string>

namespace jli
{
    class DeviceInputTime
    {
        f64 m_timestamp_frame;
        f64 m_timestamp_soundtick;
    protected:
        DeviceInputTime():
        m_timestamp_frame(0),
        m_timestamp_soundtick(0)
        {
        }
        
        DeviceInputTime(const DeviceInputTime &rhs):
        m_timestamp_frame(rhs.m_timestamp_frame),
        m_timestamp_soundtick(rhs.m_timestamp_soundtick)
        {
            
        }
        DeviceInputTime &operator=(const DeviceInputTime &rhs)
        {
            if(this != &rhs)
            {
                m_timestamp_frame = rhs.m_timestamp_frame;
                m_timestamp_soundtick = rhs.m_timestamp_soundtick;
            }
            return *this;
        }
        
        
    public:
        void setTimeStampFrame(const f64 timeStamp){
            m_timestamp_frame = timeStamp;
        }
        void setTimeStampTick(const f64 timeStamp)
        {
            m_timestamp_soundtick = timeStamp;
        }
        f64 getTimeStampFrame()const{return m_timestamp_frame;}
        f64 getTimeStampTick()const{return m_timestamp_soundtick;}
    };
    
    class DeviceTouch : public DeviceInputTime
    {
    public:
        DeviceTouch();
        
        DeviceTouch(const DeviceTouch &rhs);
        DeviceTouch &operator=(const DeviceTouch &rhs);
        DeviceTouch(void *touch, int n, int N);
        
        const btVector2 &getPosition()const;
        const btVector2 &getPreviousPosition()const;
        unsigned int getAddress()const;
        unsigned int getTapCount()const;
        unsigned int getTouchIndex()const;
        unsigned int getTouchTotal()const;
        
        operator std::string() const;
        
    private:
        void convert(DeviceTouch &t, void *touch);
        
        btVector2 m_pos;
        btVector2 m_prev_pos;
        u32 m_address;
        u32 m_tapCount;
        u32 m_touchIndex;
        u32 m_touchTotal;
    };
};
