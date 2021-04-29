/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SBSCarPlayApplicationIcon.h>

@class NSData, NSString;

@interface _SBSCarPlayApplicationInfo : NSObject <SBSCarPlayApplicationIcon> {

	NSData* _iconImageData;
	double _iconImageScale;
	NSString* _localizedDisplayName;

}

@property (nonatomic,retain) NSData * iconImageData;                       //@synthesize iconImageData=_iconImageData - In the implementation block
@property (assign,nonatomic) double iconImageScale;                        //@synthesize iconImageScale=_iconImageScale - In the implementation block
@property (nonatomic,retain) NSString * localizedDisplayName;              //@synthesize localizedDisplayName=_localizedDisplayName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSData *)iconImageData;
-(double)iconImageScale;
-(NSString *)localizedDisplayName;
-(void)setIconImageData:(NSData *)arg1 ;
-(void)setIconImageScale:(double)arg1 ;
-(void)setLocalizedDisplayName:(NSString *)arg1 ;
@end

