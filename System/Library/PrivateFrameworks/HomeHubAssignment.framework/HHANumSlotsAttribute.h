/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeHubAssignment.framework/HomeHubAssignment
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HHANumSlotsAttribute : NSObject <NSSecureCoding> {

	unsigned long long _numSlots;

}

@property (nonatomic,readonly) unsigned long long numSlots;              //@synthesize numSlots=_numSlots - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)numSlots;
-(id)initWithVal:(unsigned long long)arg1 ;
@end
