/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AppSupportUI/AppSupportUI-Structs.h>
@interface _NUIViewContainerViewInfo : NSObject {

	nui_size_cache* _sizeCache;
	CGSize _minSize;
	CGSize _maxSize;
	UIEdgeInsets _alignmentInsets;
	UIEdgeInsets _cachedAlignmentInsets;
	CGSize _baselines;
	struct {
		unsigned neverCacheLayoutSize : 1;
		unsigned shouldCacheLayoutSize : 1;
		unsigned alsoInvalidateSuperview : 1;
		unsigned cachedAlignmentInsetsAreValid : 1;
		unsigned topBaselineIsCustom : 1;
		unsigned bottomBaselineIsCustom : 1;
	}  _flags;

}
-(id)init;
@end

