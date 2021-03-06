/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MLBatchProvider.h>

@class NSArray;

@interface MLArrayBatchProvider : NSObject <MLBatchProvider> {

	NSArray* _array;

}

@property (nonatomic,readonly) NSArray * array;              //@synthesize array=_array - In the implementation block
@property (nonatomic,readonly) long long count; 
-(long long)count;
-(NSArray *)array;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(id)featuresAtIndex:(long long)arg1 ;
-(id)initWithFeatureProviderArray:(id)arg1 ;
@end

