/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NSCollectionLayoutDimension : NSObject <NSCopying> {

	double _dimension;
	long long _semantic;

}

@property (assign,nonatomic) long long semantic;                     //@synthesize semantic=_semantic - In the implementation block
@property (assign,nonatomic) double dimension;                       //@synthesize dimension=_dimension - In the implementation block
@property (nonatomic,readonly) BOOL isFractionalWidth; 
@property (nonatomic,readonly) BOOL isFractionalHeight; 
@property (nonatomic,readonly) BOOL isAbsolute; 
@property (nonatomic,readonly) BOOL isEstimated; 
+(id)estimatedDimension:(double)arg1 ;
+(id)fractionalWidthDimension:(double)arg1 ;
+(id)fractionalHeightDimension:(double)arg1 ;
+(id)absoluteDimension:(double)arg1 ;
+(id)_dimensionWithDimension:(double)arg1 semantic:(long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)dimension;
-(BOOL)isEstimated;
-(long long)semantic;
-(BOOL)isAbsolute;
-(void)setSemantic:(long long)arg1 ;
-(void)setDimension:(double)arg1 ;
-(id)initWithDimension:(double)arg1 semantic:(long long)arg2 ;
-(BOOL)isFractionalWidth;
-(BOOL)isFractionalHeight;
@end

