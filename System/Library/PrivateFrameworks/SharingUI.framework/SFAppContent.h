/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <SharingUI/SharingUI-Structs.h>
@class AMSBag, LSApplicationProxy, NSString, NSDictionary, NSError, NSMutableArray, SFLaunchRequest, NSArray, NSURL, NSObject;

@interface SFAppContent : NSObject {

	AMSBag* _amsBag;
	CGImage* _appIcon;
	LSApplicationProxy* _appProxy;
	NSString* _appName;
	NSDictionary* _amsArtworkDict;
	NSString* _amsLaunchURL;
	NSError* _amsResultsError;
	int _amsResultsState;
	NSMutableArray* _infoFetchRequests;
	SFLaunchRequest* _launchRequest;
	NSArray* _adamIDs;
	NSURL* _amsURLOverride;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,retain) NSArray * adamIDs;                                       //@synthesize adamIDs=_adamIDs - In the implementation block
@property (nonatomic,retain) NSURL * amsURLOverride;                                  //@synthesize amsURLOverride=_amsURLOverride - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,readonly) BOOL installed; 
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(BOOL)installed;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)_launchOptions;
-(NSArray *)adamIDs;
-(void)setAdamIDs:(NSArray *)arg1 ;
-(void)_amsFetchResults;
-(void)_amsFetchArtworkIfNeeded;
-(void)_amsLaunchIfNeeded;
-(id)_amsAppNameFromResult:(id)arg1 ;
-(id)_amsArtworkDictionaryFromResult:(id)arg1 ;
-(id)_amsLaunchURLFromResult:(id)arg1 ;
-(void)_amsRun;
-(void)_amsFetchAppResultsWithCompletion:(/*^block*/id)arg1 ;
-(void)_amsFetchArtworkWithRequest:(id)arg1 ;
-(id)_amsFirstResponseDataItemFromResult:(id)arg1 ;
-(void)_fetchNameAndIconWithSize:(CGSize)arg1 completion:(/*^block*/id)arg2 ;
-(void)_launchWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithAdamIDs:(id)arg1 ;
-(void)fetchNameAndIconWithSize:(CGSize)arg1 completion:(/*^block*/id)arg2 ;
-(void)launchWithCompletion:(/*^block*/id)arg1 ;
-(NSURL *)amsURLOverride;
-(void)setAmsURLOverride:(NSURL *)arg1 ;
@end

