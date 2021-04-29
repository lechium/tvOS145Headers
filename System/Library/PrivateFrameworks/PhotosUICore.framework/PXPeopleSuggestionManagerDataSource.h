/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXPeopleSuggestionManagerDataSource <NSObject>
@property (assign,nonatomic) unsigned long long initialPageLimit; 
@optional
-(void)startListeningForLibraryChanges;
-(void)stopListeningForLibraryChanges;
-(unsigned long long)initialPageLimit;
-(void)setInitialPageLimit:(unsigned long long)arg1;

@required
-(id)suggestionsForPerson:(id)arg1 withConfirmedSuggestions:(id)arg2 andRejectedSuggestions:(id)arg3 completion:(/*^block*/id)arg4;
-(BOOL)cancelSuggestionForPerson:(id)arg1 withToken:(id)arg2 error:(id*)arg3;
-(id)commitSuggestionsForPerson:(id)arg1 withConfirmedSuggestions:(id)arg2 andRejectedSuggestions:(id)arg3;

@end
