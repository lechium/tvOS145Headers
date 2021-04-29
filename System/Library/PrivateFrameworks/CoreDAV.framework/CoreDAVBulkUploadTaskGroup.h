/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <CoreDAV/CoreDAVTaskDelegate.h>

@class NSURL, NSString, NSMutableDictionary, NSDictionary;

@interface CoreDAVBulkUploadTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate> {

	NSURL* _folderURL;
	NSString* _lastKnownCTag;
	BOOL _validCTag;
	unsigned long long _multiPutBatchMaxNumResources;
	unsigned long long _multiPutBatchMaxSize;
	NSMutableDictionary* _remainingUUIDsToAddActions;
	NSMutableDictionary* _remainingHREFsToModDeleteActions;
	NSMutableDictionary* _uuidToHREF;
	NSMutableDictionary* _hrefToETag;
	NSMutableDictionary* _uuidToErrorItems;
	NSMutableDictionary* _hrefToErrorItems;
	NSMutableDictionary* _uuidToStatus;
	NSMutableDictionary* _hrefToStatus;

}

@property (nonatomic,retain) NSString * nextCTag;                                          //@synthesize lastKnownCTag=_lastKnownCTag - In the implementation block
@property (assign,nonatomic) unsigned long long multiPutBatchMaxNumResources;              //@synthesize multiPutBatchMaxNumResources=_multiPutBatchMaxNumResources - In the implementation block
@property (assign,nonatomic) unsigned long long multiPutBatchMaxSize;                      //@synthesize multiPutBatchMaxSize=_multiPutBatchMaxSize - In the implementation block
@property (nonatomic,readonly) NSURL * folderURL;                                          //@synthesize folderURL=_folderURL - In the implementation block
@property (nonatomic,readonly) BOOL validCTag;                                             //@synthesize validCTag=_validCTag - In the implementation block
@property (nonatomic,readonly) NSDictionary * uuidToHREF;                                  //@synthesize uuidToHREF=_uuidToHREF - In the implementation block
@property (nonatomic,readonly) NSDictionary * hrefToETag;                                  //@synthesize hrefToETag=_hrefToETag - In the implementation block
@property (nonatomic,readonly) NSDictionary * uuidToStatus;                                //@synthesize uuidToStatus=_uuidToStatus - In the implementation block
@property (nonatomic,readonly) NSDictionary * hrefToStatus;                                //@synthesize hrefToStatus=_hrefToStatus - In the implementation block
@property (nonatomic,readonly) NSDictionary * uuidToErrorItems;                            //@synthesize uuidToErrorItems=_uuidToErrorItems - In the implementation block
@property (nonatomic,readonly) NSDictionary * hrefToErrorItems;                            //@synthesize hrefToErrorItems=_hrefToErrorItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)startTaskGroup;
-(void)_sendNextBatch;
-(NSString *)nextCTag;
-(void)setNextCTag:(NSString *)arg1 ;
-(void)syncAway;
-(NSURL *)folderURL;
-(Class)multiPutTaskClass;
-(NSDictionary *)uuidToHREF;
-(NSDictionary *)hrefToETag;
-(NSDictionary *)uuidToErrorItems;
-(NSDictionary *)hrefToErrorItems;
-(NSDictionary *)uuidToStatus;
-(NSDictionary *)hrefToStatus;
-(id)initWithFolderURL:(id)arg1 checkCTag:(id)arg2 uuidsToAddActions:(id)arg3 hrefsToModDeleteActions:(id)arg4 context:(id)arg5 accountInfoProvider:(id)arg6 taskManager:(id)arg7 ;
-(unsigned long long)multiPutBatchMaxNumResources;
-(void)setMultiPutBatchMaxNumResources:(unsigned long long)arg1 ;
-(unsigned long long)multiPutBatchMaxSize;
-(void)setMultiPutBatchMaxSize:(unsigned long long)arg1 ;
-(BOOL)validCTag;
@end

