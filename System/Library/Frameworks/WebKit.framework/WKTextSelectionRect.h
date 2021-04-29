/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UITextSelectionRect.h>

@interface WKTextSelectionRect : UITextSelectionRect {

	SelectionRect _selectionRect;

}
-(id)range;
-(CGRect)rect;
-(id)initWithCGRect:(CGRect)arg1 ;
-(BOOL)containsStart;
-(long long)writingDirection;
-(BOOL)containsEnd;
-(BOOL)isVertical;
-(id)initWithSelectionRect:(const SelectionRect*)arg1 ;
@end

