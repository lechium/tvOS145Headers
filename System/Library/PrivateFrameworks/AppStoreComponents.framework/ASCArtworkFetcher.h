/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AppStoreComponents/AppStoreComponents-Structs.h>
@class NSURLSession, ASCTaskCoordinator;

@interface ASCArtworkFetcher : NSObject {

	NSURLSession* _urlSession;
	double _scale;
	ASCTaskCoordinator* _fetchCoordinator;

}

@property (nonatomic,readonly) NSURLSession * urlSession;                          //@synthesize urlSession=_urlSession - In the implementation block
@property (nonatomic,readonly) double scale;                                       //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) ASCTaskCoordinator * fetchCoordinator;              //@synthesize fetchCoordinator=_fetchCoordinator - In the implementation block
+(id)sharedFetcher;
-(id)dataWithContentsOfURL:(id)arg1 ;
-(double)scale;
-(id)imageWithContentsOfURL:(id)arg1 ;
-(NSURLSession *)urlSession;
-(id)imageForContentsOfArtwork:(id)arg1 withSize:(CGSize)arg2 ;
-(id)initWithURLSession:(id)arg1 scale:(double)arg2 ;
-(id)URLWithContentsOfArtwork:(id)arg1 preferredSize:(CGSize)arg2 ;
-(ASCTaskCoordinator *)fetchCoordinator;
@end
