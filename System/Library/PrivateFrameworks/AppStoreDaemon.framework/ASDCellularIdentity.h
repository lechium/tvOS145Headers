/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface ASDCellularIdentity : NSObject {

	BOOL _roaming;
	NSString* _defaultsKey;
	NSString* _simIdentity;

}

@property (getter=isRoaming) BOOL roaming;                //@synthesize roaming=_roaming - In the implementation block
@property (readonly) NSString * defaultsKey;              //@synthesize defaultsKey=_defaultsKey - In the implementation block
@property (readonly) NSString * simIdentity;              //@synthesize simIdentity=_simIdentity - In the implementation block
+(id)_digestMD5:(id)arg1 ;
+(id)identityForSubscription:(id)arg1 usingClient:(id)arg2 error:(id*)arg3 ;
-(id)description;
-(NSString *)defaultsKey;
-(id)initWithSIMIdentity:(id)arg1 roaming:(BOOL)arg2 ;
-(BOOL)isRoaming;
-(void)setRoaming:(BOOL)arg1 ;
-(NSString *)simIdentity;
@end

