/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/IKViewElement.h>

@class IKImageElement, IKTextElement, IKOrdinalElement, IKViewElement;

@interface IKLockupElement : IKViewElement

@property (nonatomic,retain,readonly) IKImageElement * image; 
@property (nonatomic,retain,readonly) IKImageElement * fullscreenImage; 
@property (nonatomic,retain,readonly) IKTextElement * title; 
@property (nonatomic,retain,readonly) IKTextElement * subtitle; 
@property (nonatomic,retain,readonly) IKTextElement * descriptionText; 
@property (nonatomic,retain,readonly) IKOrdinalElement * ordinal; 
@property (nonatomic,readonly) BOOL showTitlesOnFocus; 
@property (nonatomic,retain,readonly) IKViewElement * overlays; 
-(IKTextElement *)title;
-(IKTextElement *)subtitle;
-(IKImageElement *)image;
-(IKOrdinalElement *)ordinal;
-(IKTextElement *)descriptionText;
-(IKViewElement *)overlays;
-(IKImageElement *)fullscreenImage;
-(BOOL)showTitlesOnFocus;
@end

