/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AFBluetoothHeadphoneInEarDetectionState : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isEnabled;
	long long _primaryEarbudSide;
	long long _primaryInEarStatus;
	long long _secondaryInEarStatus;

}

@property (nonatomic,readonly) BOOL isEnabled;                              //@synthesize isEnabled=_isEnabled - In the implementation block
@property (nonatomic,readonly) long long primaryEarbudSide;                 //@synthesize primaryEarbudSide=_primaryEarbudSide - In the implementation block
@property (nonatomic,readonly) long long primaryInEarStatus;                //@synthesize primaryInEarStatus=_primaryInEarStatus - In the implementation block
@property (nonatomic,readonly) long long secondaryInEarStatus;              //@synthesize secondaryInEarStatus=_secondaryInEarStatus - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEnabled;
-(long long)primaryInEarStatus;
-(long long)secondaryInEarStatus;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(long long)primaryEarbudSide;
-(id)initWithIsEnabled:(BOOL)arg1 primaryEarbudSide:(long long)arg2 primaryInEarStatus:(long long)arg3 secondaryInEarStatus:(long long)arg4 ;
@end

