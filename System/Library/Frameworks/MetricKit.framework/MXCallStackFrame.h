/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSUUID, NSArray;

@interface MXCallStackFrame : NSObject <NSSecureCoding> {

	NSString* _binaryName;
	NSNumber* _address;
	NSUUID* _binaryUUID;
	NSNumber* _offsetInBinary;
	NSNumber* _sampleCount;
	NSArray* _subFrames;

}

@property (readonly) NSString * binaryName;                  //@synthesize binaryName=_binaryName - In the implementation block
@property (readonly) NSNumber * address;                     //@synthesize address=_address - In the implementation block
@property (readonly) NSUUID * binaryUUID;                    //@synthesize binaryUUID=_binaryUUID - In the implementation block
@property (readonly) NSNumber * offsetInBinary;              //@synthesize offsetInBinary=_offsetInBinary - In the implementation block
@property (readonly) NSNumber * sampleCount;                 //@synthesize sampleCount=_sampleCount - In the implementation block
@property (retain) NSArray * subFrames;                      //@synthesize subFrames=_subFrames - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)address;
-(NSNumber *)sampleCount;
-(id)toDictionary;
-(NSString *)binaryName;
-(id)initWithBinaryName:(id)arg1 binaryUUID:(id)arg2 address:(id)arg3 binaryOffset:(id)arg4 sampleCount:(id)arg5 withDepth:(unsigned long long)arg6 subFrameArray:(id)arg7 ;
-(NSUUID *)binaryUUID;
-(NSNumber *)offsetInBinary;
-(NSArray *)subFrames;
-(void)setSubFrames:(NSArray *)arg1 ;
@end

