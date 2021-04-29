/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <Foundation/NSValue.h>

@interface CMTimeRangeAsValue : NSValue {

	SCD_Struct_AV7 _timeRange;

}
+(BOOL)supportsSecureCoding;
+(id)valueWithCMTimeRange:(SCD_Struct_AV7)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(const char*)objCType;
-(Class)classForCoder;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)getValue:(void*)arg1 ;
-(SCD_Struct_AV7)CMTimeRangeValue;
-(BOOL)isEqualToValue:(id)arg1 ;
@end
