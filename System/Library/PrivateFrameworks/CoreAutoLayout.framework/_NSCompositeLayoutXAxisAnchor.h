/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreAutoLayout/CoreAutoLayout-Structs.h>
#import <CoreAutoLayout/NSLayoutXAxisAnchor.h>
#import <libobjc.A.dylib/NSCompositeLayoutAnchor.h>

@class NSLayoutXAxisAnchor, NSLayoutDimension, NSArray;

@interface _NSCompositeLayoutXAxisAnchor : NSLayoutXAxisAnchor <NSCompositeLayoutAnchor> {

	NSLayoutXAxisAnchor* _xAxisAnchor;
	double _constant;
	double _dimensionMultiplier;
	NSLayoutDimension* _dimension;

}

@property (readonly) NSArray * _childAnchors; 
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithAnchor:(id)arg1 ;
-(id)_expressionInContext:(SCD_Struct_NS14)arg1 ;
-(double)_valueInEngine:(id)arg1 ;
-(NSArray *)_childAnchors;
-(id)equationDescription;
-(long long)_directionAbstraction;
-(id)initWithAnchor:(id)arg1 plusDimension:(id)arg2 times:(double)arg3 plus:(double)arg4 ;
@end

