/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSEnumerator, NSArray;

@interface MXHistogram : NSObject <NSSecureCoding> {

	unsigned long long _totalBucketCount;
	NSEnumerator* _bucketEnumerator;
	NSArray* _histogramData;

}

@property (readonly) NSArray * histogramData;                          //@synthesize histogramData=_histogramData - In the implementation block
@property (readonly) unsigned long long totalBucketCount;              //@synthesize totalBucketCount=_totalBucketCount - In the implementation block
@property (readonly) NSEnumerator * bucketEnumerator;                  //@synthesize bucketEnumerator=_bucketEnumerator - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)toDictionary;
-(id)initWithHistogramBucketData:(id)arg1 ;
-(unsigned long long)totalBucketCount;
-(NSEnumerator *)bucketEnumerator;
-(NSArray *)histogramData;
@end

