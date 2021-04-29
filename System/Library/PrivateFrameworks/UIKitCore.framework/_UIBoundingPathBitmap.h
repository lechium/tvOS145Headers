/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _UIBoundingPathBitmap : NSObject <NSSecureCoding> {

	UIBoundingPathBitmapData* _bitmapData;

}

@property (nonatomic,readonly) UIBoundingPathBitmapData* bitmapData;              //@synthesize bitmapData=_bitmapData - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)debugQuickLookObject;
-(UIBoundingPathBitmapData*)bitmapData;
-(id)_imageRepresentation;
-(id)initWithBitmapData:(UIBoundingPathBitmapData*)arg1 ;
-(id)boundingPathBitmapWithRect:(UIIntegralRect)arg1 cornerRadii:(UIIntegralCornerRadii)arg2 ;
-(id)initWithSize:(UIIntegralSize)arg1 containsPoint:(/*^block*/id)arg2 ;
-(id)boundingPathBitmapWithRect:(UIIntegralRect)arg1 ;
@end

