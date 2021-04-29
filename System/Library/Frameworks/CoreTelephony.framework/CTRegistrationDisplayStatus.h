/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTRegistrationDisplayStatus : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isInHomeCountry;
	BOOL _changedDueToSimRemoval;
	BOOL _isRegistrationForcedHome;
	NSString* _registrationDisplayStatus;

}

@property (nonatomic,retain) NSString * registrationDisplayStatus;              //@synthesize registrationDisplayStatus=_registrationDisplayStatus - In the implementation block
@property (assign,nonatomic) BOOL isInHomeCountry;                              //@synthesize isInHomeCountry=_isInHomeCountry - In the implementation block
@property (assign,nonatomic) BOOL changedDueToSimRemoval;                       //@synthesize changedDueToSimRemoval=_changedDueToSimRemoval - In the implementation block
@property (assign,nonatomic) BOOL isRegistrationForcedHome;                     //@synthesize isRegistrationForcedHome=_isRegistrationForcedHome - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)registrationDisplayStatus;
-(BOOL)isInHomeCountry;
-(BOOL)changedDueToSimRemoval;
-(BOOL)isRegistrationForcedHome;
-(void)setRegistrationDisplayStatus:(NSString *)arg1 ;
-(void)setIsInHomeCountry:(BOOL)arg1 ;
-(void)setChangedDueToSimRemoval:(BOOL)arg1 ;
-(void)setIsRegistrationForcedHome:(BOOL)arg1 ;
@end

