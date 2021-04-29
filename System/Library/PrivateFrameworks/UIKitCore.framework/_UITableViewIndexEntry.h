/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class UIImage;

@interface _UITableViewIndexEntry : NSObject {

	UIImage* _image;
	id _line;
	CGPoint _baselinePoint;
	CGRect _bounds;
	CGRect _typeBounds;

}

@property (nonatomic,retain) UIImage * image;                    //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) id line;                            //@synthesize line=_line - In the implementation block
@property (assign,nonatomic) CGRect bounds;                      //@synthesize bounds=_bounds - In the implementation block
@property (assign,nonatomic) CGRect typeBounds;                  //@synthesize typeBounds=_typeBounds - In the implementation block
@property (assign,nonatomic) CGPoint baselinePoint;              //@synthesize baselinePoint=_baselinePoint - In the implementation block
-(id)description;
-(id)line;
-(CGRect)bounds;
-(UIImage *)image;
-(void)setBounds:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setLine:(id)arg1 ;
-(CGRect)typeBounds;
-(CGPoint)baselinePoint;
-(void)setTypeBounds:(CGRect)arg1 ;
-(void)setBaselinePoint:(CGPoint)arg1 ;
@end

