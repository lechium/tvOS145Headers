/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPAsyncOperation.h>

@class NSOperationQueue, MPModelLibraryAddToPlaylistChangeRequest;

@interface MPModelLibraryAddToPlaylistChangeRequestOperation : MPAsyncOperation {

	NSOperationQueue* _operationQueue;
	MPModelLibraryAddToPlaylistChangeRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) MPModelLibraryAddToPlaylistChangeRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id responseHandler;                                              //@synthesize responseHandler=_responseHandler - In the implementation block
-(MPModelLibraryAddToPlaylistChangeRequest *)request;
-(void)execute;
-(void)setRequest:(MPModelLibraryAddToPlaylistChangeRequest *)arg1 ;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
-(BOOL)_isCloudLibraryEnabled;
-(void)_updateCloudLibraryForPlaylist:(id)arg1 ;
@end

