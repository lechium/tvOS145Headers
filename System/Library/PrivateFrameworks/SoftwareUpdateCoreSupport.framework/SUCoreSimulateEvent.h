/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface SUCoreSimulateEvent : NSObject <NSSecureCoding> {

	int _count;
	int _startAt;
	int _endAt;
	int _duration;
	long long _simAction;
	long long _simTrigger;
	NSString* _moduleName;
	NSString* _identityName;
	NSString* _fsmEvent;
	NSString* _fsmState;
	NSString* _alteration;
	NSString* _untilStop;
	NSArray* _assetBuildVersions;
	NSArray* _assetProductVersions;
	NSString* _assetAttributesPlist;
	NSString* _assetState;
	NSString* _updateInfoPlist;
	NSString* _errorDomain;
	long long _errorCode;
	long long _errorRecoverable;

}

@property (assign,nonatomic) int count;                                             //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) long long simAction;                                 //@synthesize simAction=_simAction - In the implementation block
@property (nonatomic,readonly) long long simTrigger;                                //@synthesize simTrigger=_simTrigger - In the implementation block
@property (nonatomic,retain,readonly) NSString * moduleName;                        //@synthesize moduleName=_moduleName - In the implementation block
@property (nonatomic,retain,readonly) NSString * identityName;                      //@synthesize identityName=_identityName - In the implementation block
@property (nonatomic,retain,readonly) NSString * fsmEvent;                          //@synthesize fsmEvent=_fsmEvent - In the implementation block
@property (nonatomic,retain,readonly) NSString * fsmState;                          //@synthesize fsmState=_fsmState - In the implementation block
@property (nonatomic,retain,readonly) NSString * alteration;                        //@synthesize alteration=_alteration - In the implementation block
@property (nonatomic,readonly) int startAt;                                         //@synthesize startAt=_startAt - In the implementation block
@property (nonatomic,readonly) int endAt;                                           //@synthesize endAt=_endAt - In the implementation block
@property (nonatomic,readonly) int duration;                                        //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain,readonly) NSString * untilStop;                         //@synthesize untilStop=_untilStop - In the implementation block
@property (nonatomic,retain,readonly) NSArray * assetBuildVersions;                 //@synthesize assetBuildVersions=_assetBuildVersions - In the implementation block
@property (nonatomic,retain,readonly) NSArray * assetProductVersions;               //@synthesize assetProductVersions=_assetProductVersions - In the implementation block
@property (nonatomic,retain,readonly) NSString * assetAttributesPlist;              //@synthesize assetAttributesPlist=_assetAttributesPlist - In the implementation block
@property (nonatomic,retain,readonly) NSString * assetState;                        //@synthesize assetState=_assetState - In the implementation block
@property (nonatomic,retain,readonly) NSString * updateInfoPlist;                   //@synthesize updateInfoPlist=_updateInfoPlist - In the implementation block
@property (nonatomic,retain,readonly) NSString * errorDomain;                       //@synthesize errorDomain=_errorDomain - In the implementation block
@property (nonatomic,readonly) long long errorCode;                                 //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,readonly) long long errorRecoverable;                          //@synthesize errorRecoverable=_errorRecoverable - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)nameForSimulateEventBoolean:(long long)arg1 ;
-(id)description;
-(int)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setCount:(int)arg1 ;
-(int)duration;
-(NSString *)errorDomain;
-(long long)errorCode;
-(id)summary;
-(id)_actionName;
-(id)_triggerName;
-(NSString *)assetState;
-(NSString *)identityName;
-(NSString *)fsmState;
-(long long)simAction;
-(long long)errorRecoverable;
-(NSString *)updateInfoPlist;
-(id)buildErrorWithDescription:(id)arg1 ;
-(NSString *)assetAttributesPlist;
-(NSArray *)assetBuildVersions;
-(NSArray *)assetProductVersions;
-(NSString *)moduleName;
-(id)initWithAction:(long long)arg1 onTrigger:(long long)arg2 forModule:(id)arg3 atFunction:(id)arg4 startAt:(int)arg5 endAt:(int)arg6 duration:(int)arg7 untilStop:(id)arg8 assetBuildVersions:(id)arg9 assetProductVersions:(id)arg10 assetAttributesPlist:(id)arg11 assetState:(id)arg12 updateInfoPlist:(id)arg13 errorDomain:(id)arg14 errorCode:(long long)arg15 errorRecoverable:(long long)arg16 ;
-(id)initWithAction:(long long)arg1 onTrigger:(long long)arg2 forMachine:(id)arg3 atEvent:(id)arg4 inState:(id)arg5 alteration:(id)arg6 startAt:(int)arg7 endAt:(int)arg8 assetBuildVersions:(id)arg9 assetProductVersions:(id)arg10 assetAttributesPlist:(id)arg11 assetState:(id)arg12 updateInfoPlist:(id)arg13 errorDomain:(id)arg14 errorCode:(long long)arg15 errorRecoverable:(long long)arg16 ;
-(long long)simTrigger;
-(NSString *)fsmEvent;
-(int)startAt;
-(int)endAt;
-(NSString *)untilStop;
-(id)_initWithAction:(long long)arg1 onTrigger:(long long)arg2 forModule:(id)arg3 atIdentity:(id)arg4 atEvent:(id)arg5 inState:(id)arg6 alteration:(id)arg7 startAt:(int)arg8 endAt:(int)arg9 duration:(int)arg10 untilStop:(id)arg11 assetBuildVersions:(id)arg12 assetProductVersions:(id)arg13 assetAttributesPlist:(id)arg14 assetState:(id)arg15 updateInfoPlist:(id)arg16 errorDomain:(id)arg17 errorCode:(long long)arg18 errorRecoverable:(long long)arg19 ;
-(id)_descriptionFSM;
-(id)_descriptionStandard;
-(NSString *)alteration;
@end

