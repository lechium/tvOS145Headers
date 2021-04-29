/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface SiriTVUIMonogrammer : NSObject {

	NSMutableDictionary* _monogramCache;

}
+(id)sharedInstance;
-(id)init;
-(void)clearCache;
-(id)monogramWithText:(id)arg1 diameter:(double)arg2 isFocused:(BOOL)arg3 userInterfaceStyle:(long long)arg4 ;
-(id)monogramForMonogramNames:(id)arg1 diameter:(double)arg2 isFocused:(BOOL)arg3 userInterfaceStyle:(long long)arg4 ;
-(id)_monogramLabelAttributesForFontSize:(double)arg1 userInterfaceStyle:(long long)arg2 ;
@end

