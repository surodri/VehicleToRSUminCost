//
// Generated file, do not edit! Created by opp_msgc 4.2 from base/messages/AirFrame.msg.
//

#ifndef _AIRFRAME_M_H_
#define _AIRFRAME_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0402
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif

// cplusplus {{
#include "Signal_.h"
// }}


namespace Veins {

/**
 * Class generated from <tt>base/messages/AirFrame.msg</tt> by opp_msgc.
 * <pre>
 * packet AirFrame
 * {
 *     Signal signal;		
 * 
 *     simtime_t duration;	
 * 
 *     int state = 1; 		
 *         					
 *         					
 * 
 *     int type = 0;		
 *         					
 * 
 *     long id;			
 * 							
 * 							
 * 	int protocolId;		
 * 	
 * 	int channel;    	
 * }
 * </pre>
 */
class AirFrame : public ::cPacket
{
  protected:
    Signal signal_var;
    simtime_t duration_var;
    int state_var;
    int type_var;
    long id_var;
    int protocolId_var;
    int channel_var;

  private:
    void copy(const AirFrame& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const AirFrame&);

  public:
    AirFrame(const char *name=NULL, int kind=0);
    AirFrame(const AirFrame& other);
    virtual ~AirFrame();
    AirFrame& operator=(const AirFrame& other);
    virtual AirFrame *dup() const {return new AirFrame(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual Signal& getSignal();
    virtual const Signal& getSignal() const {return const_cast<AirFrame*>(this)->getSignal();}
    virtual void setSignal(const Signal& signal);
    virtual simtime_t getDuration() const;
    virtual void setDuration(simtime_t duration);
    virtual int getState() const;
    virtual void setState(int state);
    virtual int getType() const;
    virtual void setType(int type);
    virtual long getId() const;
    virtual void setId(long id);
    virtual int getProtocolId() const;
    virtual void setProtocolId(int protocolId);
    virtual int getChannel() const;
    virtual void setChannel(int channel);
};

inline void doPacking(cCommBuffer *b, AirFrame& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, AirFrame& obj) {obj.parsimUnpack(b);}

}; // end namespace Veins

#endif // _AIRFRAME_M_H_
