/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/SwiftUI.framework/SwiftUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SwiftUI/SwiftUI-Structs.h>
#import <SwiftUI/SwiftUI._UIGraphicsView.h>
#import <libobjc.A.dylib/RBLayerDelegate.h>

@interface SwiftUI.RenderBoxView : SwiftUI._UIGraphicsView <RBLayerDelegate>

@property (assign,nonatomic) BOOL opaque; 
+(Class)layerClass;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)setOpaque:(BOOL)arg1 ;
-(BOOL)isOpaque;
-(void)setNeedsDisplay;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(void)RBLayer:(id)arg1 draw:(id)arg2 ;
@end
