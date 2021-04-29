/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequest.h>

@protocol OS_dispatch_semaphore;
@class GEOZilchDecoder, NSError, NSObject;

@interface GEOZilchDecoderRequest : GEOMapRequest {

	unique_ptr<geo::ZilchMapModel, std::__1::default_delete<geo::ZilchMapModel>>* _mapModel;
	GEOZilchDecoder* _decoder;
	shared_ptr<zilch::Message>* _message;
	/*^block*/id _pathHandler;
	/*^block*/id _errorHandler;
	NSError* _firstTileLoadingError;
	NSObject*<OS_dispatch_semaphore> _finishedSemaphore;

}

@property (copy) id pathHandler;               //@synthesize pathHandler=_pathHandler - In the implementation block
@property (copy) id errorHandler;              //@synthesize errorHandler=_errorHandler - In the implementation block
-(void)cancel;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(id)initWithDecoder:(id)arg1 message:(shared_ptr<zilch::Message>*)arg2 ;
-(void)decodeWithPathHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)pathHandler;
-(void)setPathHandler:(id)arg1 ;
-(void)_finishedDecodingWithPath:(Path<std::__1::shared_ptr<geo::MapEdge>>*)arg1 ;
@end

