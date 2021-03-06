/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIFont;

@interface UITextRenderingAttributes : NSObject <NSCopying> {

	UIFont* _font;
	double _minimumFontSize;
	double _actualFontSize;
	double _lineSpacing;
	long long _lineBreakMode;
	long long _baselineAdjustment;
	double _trackingAdjustment;
	double _minimumTrackingAdjustment;
	double _actualTrackingAdjustment;
	long long _alignment;
	BOOL _includeEmoji;
	CGRect _truncationRect;
	BOOL _drawUnderline;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
@end

