/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject;

@interface ANAnnouncementStatePublisher : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	char* _name;
	int _registrationToken;

}
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(BOOL)_setName:(id)arg1 ;
-(void)_unregister;
-(void)_register;
-(BOOL)_setState:(unsigned long long)arg1 withToken:(int)arg2 ;
-(void)_publishState:(unsigned long long)arg1 name:(id)arg2 ;
-(void)publishState:(unsigned long long)arg1 name:(id)arg2 ;
@end

