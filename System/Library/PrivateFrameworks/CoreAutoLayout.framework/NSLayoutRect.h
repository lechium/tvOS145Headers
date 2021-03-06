/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreAutoLayout/CoreAutoLayout-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSLayoutXAxisAnchor, NSLayoutYAxisAnchor, NSLayoutDimension, NSString, NSLayoutPoint;

@interface NSLayoutRect : NSObject <NSCopying, NSCoding> {

	NSLayoutXAxisAnchor* _leadingAnchor;
	NSLayoutYAxisAnchor* _topAnchor;
	NSLayoutDimension* _heightAnchor;
	NSLayoutDimension* _widthAnchor;
	NSString* _name;
	id _reserved1;

}

@property (copy,readonly) NSLayoutYAxisAnchor * topAnchor; 
@property (copy,readonly) NSLayoutYAxisAnchor * centerYAnchor; 
@property (copy,readonly) NSLayoutYAxisAnchor * bottomAnchor; 
@property (copy,readonly) NSLayoutXAxisAnchor * leadingAnchor; 
@property (copy,readonly) NSLayoutXAxisAnchor * centerXAnchor; 
@property (copy,readonly) NSLayoutXAxisAnchor * trailingAnchor; 
@property (copy,readonly) NSLayoutDimension * widthAnchor; 
@property (copy,readonly) NSLayoutDimension * heightAnchor; 
@property (copy,readonly) NSLayoutPoint * centerLayoutPoint; 
+(id)layoutRectWithLeadingAnchor:(id)arg1 topAnchor:(id)arg2 trailingAnchor:(id)arg3 bottomAnchor:(id)arg4 ;
+(id)layoutRectWithLeadingAnchor:(id)arg1 topAnchor:(id)arg2 widthAnchor:(id)arg3 heightAnchor:(id)arg4 ;
+(id)layoutRectWithCenterLayoutPoint:(id)arg1 widthAnchor:(id)arg2 heightAnchor:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)debugDescription;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSLayoutXAxisAnchor *)leadingAnchor;
-(NSLayoutXAxisAnchor *)trailingAnchor;
-(NSLayoutYAxisAnchor *)topAnchor;
-(NSLayoutYAxisAnchor *)bottomAnchor;
-(NSLayoutDimension *)heightAnchor;
-(NSLayoutDimension *)widthAnchor;
-(NSLayoutYAxisAnchor *)centerYAnchor;
-(NSLayoutXAxisAnchor *)centerXAnchor;
-(id)_equationDescriptionInParent;
-(id)nsli_superitem;
-(BOOL)nsli_isLegalConstraintItem;
-(id)ruleEqualToLayoutRect:(id)arg1 ;
-(id)ruleContainingLayoutRect:(id)arg1 ;
-(id)observableValueInItem:(id)arg1 ;
-(CGRect)valueInItem:(id)arg1 ;
-(id)layoutRectBySlicingWithDimension:(id)arg1 fromEdge:(long long)arg2 ;
-(NSLayoutPoint *)centerLayoutPoint;
-(id)layoutRectByInsettingTop:(double)arg1 leading:(double)arg2 bottom:(double)arg3 trailing:(double)arg4 ;
-(id)layoutRectByInsettingTopWithDimension:(id)arg1 leadingWithDimension:(id)arg2 bottomWithDimension:(id)arg3 trailingWithDimension:(id)arg4 ;
-(id)layoutRectBySlicingWithDistance:(double)arg1 fromEdge:(long long)arg2 ;
-(id)layoutRectBySlicingWithProportion:(double)arg1 fromEdge:(long long)arg2 ;
-(id)constraintsEqualToLayoutRect:(id)arg1 ;
-(id)constraintsContainingWithinLayoutRect:(id)arg1 ;
-(id)layoutRectWithName:(id)arg1 ;
@end

