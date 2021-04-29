/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSValueTransformer.h>

@interface TVHKBlockValueTransformer : NSValueTransformer {

	/*^block*/id _valueTransformBlock;

}

@property (nonatomic,copy) id valueTransformBlock;              //@synthesize valueTransformBlock=_valueTransformBlock - In the implementation block
+(id)new;
+(BOOL)allowsReverseTransformation;
-(id)init;
-(id)transformedValue:(id)arg1 ;
-(id)valueTransformBlock;
-(id)initWithValueTransformBlock:(/*^block*/id)arg1 ;
-(void)setValueTransformBlock:(id)arg1 ;
@end

