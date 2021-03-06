/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUICore/VUIAsynchronousOperation.h>

@class VUIMediaItemEntityTypesFetchResponse, NSError, MPMediaLibrary;

@interface VUIMPMediaItemEntityTypesOperation : VUIAsynchronousOperation {

	VUIMediaItemEntityTypesFetchResponse* _response;
	NSError* _error;
	MPMediaLibrary* _mediaLibrary;

}

@property (nonatomic,retain) MPMediaLibrary * mediaLibrary;                                //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (nonatomic,retain) VUIMediaItemEntityTypesFetchResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,copy) NSError * error;                                                //@synthesize error=_error - In the implementation block
-(id)init;
-(NSError *)error;
-(void)setResponse:(VUIMediaItemEntityTypesFetchResponse *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(VUIMediaItemEntityTypesFetchResponse *)response;
-(MPMediaLibrary *)mediaLibrary;
-(void)setMediaLibrary:(MPMediaLibrary *)arg1 ;
-(void)executionDidBegin;
-(BOOL)_mediaLibraryHasEpisodes;
-(BOOL)_mediaLibraryHasHasHomeVideos;
-(BOOL)_mediaLibraryHasMovies;
-(BOOL)_mediaLibraryHasMovieRentals;
-(BOOL)_mediaLibraryHasLocalMediaItems;
-(BOOL)_canUseCheapEntityCheckWithMediaEntityType:(id)arg1 ;
-(BOOL)_mediaLibraryHasMediaItemsWithQuery:(id)arg1 ;
-(id)initWithMPMediaLibrary:(id)arg1 ;
@end

