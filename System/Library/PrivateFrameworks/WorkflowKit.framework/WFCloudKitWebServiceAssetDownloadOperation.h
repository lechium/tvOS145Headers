/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFCloudKitAsyncOperation.h>

@protocol WFCloudKitItem;
@class NSURL, NSString;

@interface WFCloudKitWebServiceAssetDownloadOperation : WFCloudKitAsyncOperation {

	NSURL* _assetURL;
	id<WFCloudKitItem> _item;
	NSString* _key;

}

@property (nonatomic,retain) NSURL * assetURL;                            //@synthesize assetURL=_assetURL - In the implementation block
@property (assign,nonatomic,__weak) id<WFCloudKitItem> item;              //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) NSString * key;                              //@synthesize key=_key - In the implementation block
-(void)start;
-(NSString *)key;
-(void)setItem:(id<WFCloudKitItem>)arg1 ;
-(id<WFCloudKitItem>)item;
-(void)setKey:(NSString *)arg1 ;
-(NSURL *)assetURL;
-(void)setAssetURL:(NSURL *)arg1 ;
-(id)initWithAssetURL:(id)arg1 item:(id)arg2 key:(id)arg3 ;
@end

