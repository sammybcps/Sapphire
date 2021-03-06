#ifndef _ACTIONMOUNT_H_
#define _ACTIONMOUNT_H_

#include "src/servers/Server_Zone/Forwards.h"
#include "Action.h"

namespace Core { namespace Action {

   class ActionMount : public Action
   {
   private: 

   public:
      ActionMount();
      ~ActionMount();
      
      ActionMount( Entity::ActorPtr pActor, uint32_t mountId );

      void onStart() override;
      void onFinish() override;
      void onInterrupt() override;

   };

}
}

#endif