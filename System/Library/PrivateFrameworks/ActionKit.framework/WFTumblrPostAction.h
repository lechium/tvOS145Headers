/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFAction.h>
#import <libobjc.A.dylib/WFDynamicEnumerationDataSource.h>

@class TMAPIClient, WFAppInstalledResource, NSString;

@interface WFTumblrPostAction : WFAction <WFDynamicEnumerationDataSource> {

	TMAPIClient* _client;
	WFAppInstalledResource* _appInstalledResource;

}

@property (nonatomic,readonly) TMAPIClient * client;                                     //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) WFAppInstalledResource * appInstalledResource;              //@synthesize appInstalledResource=_appInstalledResource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TMAPIClient *)client;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)initializeParameters;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(id)possibleStatesForEnumeration:(id)arg1 ;
-(id)defaultSerializedRepresentationForEnumeration:(id)arg1 ;
-(id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2 ;
-(id)inputContentClasses;
-(WFAppInstalledResource *)appInstalledResource;
-(void)openFiles:(id)arg1 ;
-(void)openPostWithType:(id)arg1 withParameters:(id)arg2 ;
-(void)updateTagsParameterHidden;
-(BOOL)inputsMultipleItems;
-(void)setAppInstalledResource:(WFAppInstalledResource *)arg1 ;
@end

