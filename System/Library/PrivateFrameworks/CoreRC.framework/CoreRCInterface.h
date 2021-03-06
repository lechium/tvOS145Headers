/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CoreRCInterfaceListener;

@interface CoreRCInterface : NSObject {

	CoreRCInterfaceListener* _listener;
	id _testProperty;

}

@property (nonatomic,copy) id testProperty;                                   //@synthesize testProperty=_testProperty - In the implementation block
@property (assign,nonatomic) CoreRCInterfaceListener * listener;              //@synthesize listener=_listener - In the implementation block
-(void)dealloc;
-(CoreRCInterfaceListener *)listener;
-(void)setListener:(CoreRCInterfaceListener *)arg1 ;
-(id)propertyForKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(void)scheduleWithDispatchQueue:(id)arg1 ;
-(void)unscheduleFromDispatchQueue:(id)arg1 ;
-(BOOL)doesNotImplement:(SEL)arg1 error:(id*)arg2 ;
-(void)setTestProperty:(id)arg1 ;
-(id)testProperty;
@end

