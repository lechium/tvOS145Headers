/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXPeopleSuggestionManagerDelegate <NSObject>
@optional
-(void)confirmationCountUpdatedForSuggestionManager:(id)arg1 undoing:(BOOL)arg2;
-(void)willLoadMoreSuggestionsForSuggestionManager:(id)arg1;

@required
-(void)suggestionManager:(id)arg1 hasNewSuggestionsAvailable:(id)arg2;
-(void)noMoreSuggestionsAvailableForSuggestionManager:(id)arg1;

@end

