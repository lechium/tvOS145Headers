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

@interface CTDataConnectionAvailabilityStatus : NSObject <NSCopying, NSSecureCoding> {

	BOOL _available;
	int _csiError;

}

@property (assign,nonatomic) BOOL available;              //@synthesize available=_available - In the implementation block
@property (assign,nonatomic) int csiError;                //@synthesize csiError=_csiError - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)available;
-(int)csiError;
-(void)setAvailable:(BOOL)arg1 ;
-(void)setCsiError:(int)arg1 ;
@end

