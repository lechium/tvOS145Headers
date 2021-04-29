/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class LPPointUnit;

@interface LPSize : NSObject <NSCopying> {

	LPPointUnit* _width;
	LPPointUnit* _height;

}

@property (nonatomic,retain,readonly) LPPointUnit * width;               //@synthesize width=_width - In the implementation block
@property (nonatomic,retain,readonly) LPPointUnit * height;              //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) CGSize asSize; 
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(BOOL)isEmpty;
-(LPPointUnit *)width;
-(LPPointUnit *)height;
-(id)initWithSize:(CGSize)arg1 ;
-(id)initWithSquareSize:(double)arg1 ;
-(CGSize)asSize;
-(id)initWithSquarePoints:(id)arg1 ;
@end

