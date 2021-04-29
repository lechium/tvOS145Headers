/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface PPBundleAlgorithmCount : NSObject {

	unsigned _algorithm;
	unsigned _count;
	NSString* _bundleId;

}

@property (nonatomic,retain) NSString * bundleId;              //@synthesize bundleId=_bundleId - In the implementation block
@property (assign,nonatomic) unsigned algorithm;               //@synthesize algorithm=_algorithm - In the implementation block
@property (assign,nonatomic) unsigned count;                   //@synthesize count=_count - In the implementation block
-(unsigned)count;
-(void)setBundleId:(NSString *)arg1 ;
-(void)setCount:(unsigned)arg1 ;
-(NSString *)bundleId;
-(unsigned)algorithm;
-(void)setAlgorithm:(unsigned)arg1 ;
@end

