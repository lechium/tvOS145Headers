/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDAV/CoreDAVTask.h>

@class CoreDAVMultiStatusItem, NSSet;

@interface CoreDAVPropertyFindBaseTask : CoreDAVTask {

	CoreDAVMultiStatusItem* _multiStatus;
	NSSet* _propertiesToFind;

}

@property (nonatomic,retain) NSSet * propertiesToFind;                          //@synthesize propertiesToFind=_propertiesToFind - In the implementation block
@property (nonatomic,retain) CoreDAVMultiStatusItem * multiStatus;              //@synthesize multiStatus=_multiStatus - In the implementation block
-(id)description;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(CoreDAVMultiStatusItem *)multiStatus;
-(id)additionalHeaderValues;
-(id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2 ;
-(NSSet *)propertiesToFind;
-(void)updateMultiStatusFromResponse;
-(id)getTotalFailureError;
-(id)successfulValueForNameSpace:(id)arg1 elementName:(id)arg2 ;
-(id)parseHints;
-(void)setMultiStatus:(CoreDAVMultiStatusItem *)arg1 ;
-(void)setPropertiesToFind:(NSSet *)arg1 ;
@end

