/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AssistantServices/AssistantServices-Structs.h>
@class CPDistributedMessagingCenter;

@interface AFContextManager : NSObject {

	CFArrayRef _contextProviders;
	CPDistributedMessagingCenter* _center;

}
+(id)defaultContextManager;
-(id)init;
-(void)dealloc;
-(void)_startListening;
-(id)_serverName;
-(void)nothing;
-(void)_collateContextsIntoArray:(id)arg1 ;
-(void)_shutdownServer;
-(id)_collateContexts;
-(void)startCenter:(id)arg1 ;
-(void)_stopListening;
-(BOOL)addContextProvider:(id)arg1 ;
-(void)removeContextProvider:(id)arg1 ;
@end
