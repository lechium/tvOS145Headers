/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServicesUI/AMSUIDynamicViewController.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@class ACAccount, NSString;

@interface AMSUIBundleViewController : AMSUIDynamicViewController <AMSBagConsumer> {

	ACAccount* account;
	NSString* _placement;
	NSString* _serviceType;

}

@property (nonatomic,retain) NSString * placement;                  //@synthesize placement=_placement - In the implementation block
@property (nonatomic,retain) NSString * serviceType;                //@synthesize serviceType=_serviceType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)bagKeySet;
-(NSString *)serviceType;
-(void)setServiceType:(NSString *)arg1 ;
-(id)account;
-(void)setAccount:(id)arg1 ;
-(NSString *)placement;
-(void)setPlacement:(NSString *)arg1 ;
-(id)initWithServiceType:(id)arg1 placement:(id)arg2 account:(id)arg3 bag:(id)arg4 ;
@end
