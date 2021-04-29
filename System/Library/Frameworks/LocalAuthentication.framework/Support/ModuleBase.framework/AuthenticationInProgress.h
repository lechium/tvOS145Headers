/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/ModuleBase.framework/ModuleBase
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol LAUIDelegate;
@class NSDictionary, NSDate, MechanismBase;

@interface AuthenticationInProgress : NSObject {

	id<LAUIDelegate> _uiDelegate;
	NSDictionary* _internalOptions;
	/*^block*/id _reply;
	int _originatorPid;
	NSDate* _started;
	BOOL _running;
	unsigned _originatorUid;
	long long _policy;
	MechanismBase* _mechanism;
	long long _originatorId;

}

@property (getter=isRunning,nonatomic,readonly) BOOL running;              //@synthesize running=_running - In the implementation block
@property (nonatomic,readonly) long long policy;                           //@synthesize policy=_policy - In the implementation block
@property (nonatomic,readonly) MechanismBase * mechanism;                  //@synthesize mechanism=_mechanism - In the implementation block
@property (nonatomic,readonly) long long originatorId;                     //@synthesize originatorId=_originatorId - In the implementation block
@property (nonatomic,readonly) unsigned originatorUid;                     //@synthesize originatorUid=_originatorUid - In the implementation block
-(id)description;
-(BOOL)isRunning;
-(long long)policy;
-(MechanismBase *)mechanism;
-(void)runWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)originatorId;
-(id)initWithMechanism:(id)arg1 policy:(long long)arg2 uiDelegate:(id)arg3 originator:(id)arg4 internalInfo:(id)arg5 reply:(/*^block*/id)arg6 ;
-(unsigned)originatorUid;
@end
