/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/IKJSObject.h>
#import <TVContentPartnerKitUI/TVJSSearchSiriContext.h>
@class NSString;


@protocol TVJSSearchSiriContext <JSExport>
@property (nonatomic,copy,readonly) NSString * pluginMode; 
@required
-(NSString *)pluginMode;
-(void)didSelectContentItemInPartialScreenPluginMode:(id)arg1;
-(void)didPlayContentItemInPartialScreenPluginMode:(id)arg1;
-(void)fetchNextBatch:(id)arg1;
-(void)sendMetricsWithCategory:(id)arg1 info:(id)arg2;

@end


@class NSString, TVCKSearchSiriContext;

@interface TVJSSearchSiriContext : IKJSObject <TVJSSearchSiriContext> {

	TVCKSearchSiriContext* _siriContext;

}

@property (nonatomic,retain) TVCKSearchSiriContext * siriContext;              //@synthesize siriContext=_siriContext - In the implementation block
@property (nonatomic,copy,readonly) NSString * pluginMode; 
-(TVCKSearchSiriContext *)siriContext;
-(void)setSiriContext:(TVCKSearchSiriContext *)arg1 ;
-(void)_invokePluginModeDidChangeMethod;
-(NSString *)pluginMode;
-(void)didSelectContentItemInPartialScreenPluginMode:(id)arg1 ;
-(void)didPlayContentItemInPartialScreenPluginMode:(id)arg1 ;
-(void)fetchNextBatch:(id)arg1 ;
-(void)sendMetricsWithCategory:(id)arg1 info:(id)arg2 ;
-(id)initWithAppContext:(id)arg1 siriContext:(id)arg2 ;
@end

