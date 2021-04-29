/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <Metal/MTLCounterSampleBufferDescriptor.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol MTLCounterSet;
@class NSString;

@interface MTLCounterSampleBufferDescriptorInternal : MTLCounterSampleBufferDescriptor <NSCopying> {

	id<MTLCounterSet> _counterSet;
	unsigned long long _storageMode;
	NSString* _label;
	unsigned long long _sampleCount;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(unsigned long long)sampleCount;
-(void)setSampleCount:(unsigned long long)arg1 ;
-(unsigned long long)storageMode;
-(id)counterSet;
-(void)setCounterSet:(id)arg1 ;
-(void)setStorageMode:(unsigned long long)arg1 ;
@end
