/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CertInfo/CertInfo-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, CertInfoCertificateDetailsView;

@interface CertInfoTrustDetailsView : UIView {

	NSArray* _certificateViews;
	CertInfoCertificateDetailsView* _currentCertView;

}
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 trustProperties:(id)arg2 ;
-(void)_appendRemainingCertificates;
@end
