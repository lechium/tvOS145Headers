/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PKDisplayTraitCollection : NSObject <NSSecureCoding> {

	double _canvasScale;
	CGSize _canvasSize;

}

@property (assign,nonatomic) CGSize canvasSize;               //@synthesize canvasSize=_canvasSize - In the implementation block
@property (assign,nonatomic) double canvasScale;              //@synthesize canvasScale=_canvasScale - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)canvasSize;
-(void)setCanvasSize:(CGSize)arg1 ;
-(id)initWithDefaultTraits;
-(double)canvasScale;
-(void)setCanvasScale:(double)arg1 ;
@end

