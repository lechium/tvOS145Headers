/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/PHResourceRequest.h>

@protocol PLResourceIdentity;
@interface PHMakeResourceAvailableRequest : PHResourceRequest {

	BOOL _transient;
	BOOL _networkAccessAllowed;
	id<PLResourceIdentity> _resourceIdentity;
	long long _downloadIntent;

}

@property (nonatomic,readonly) id<PLResourceIdentity> resourceIdentity;                            //@synthesize resourceIdentity=_resourceIdentity - In the implementation block
@property (assign,getter=isTransient,nonatomic) BOOL transient;                                    //@synthesize transient=_transient - In the implementation block
@property (assign,getter=isNetworkAccessAllowed,nonatomic) BOOL networkAccessAllowed;              //@synthesize networkAccessAllowed=_networkAccessAllowed - In the implementation block
@property (assign,nonatomic) long long downloadIntent;                                             //@synthesize downloadIntent=_downloadIntent - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isTransient;
-(void)setTransient:(BOOL)arg1 ;
-(BOOL)isNetworkAccessAllowed;
-(long long)downloadIntent;
-(void)setNetworkAccessAllowed:(BOOL)arg1 ;
-(void)setDownloadIntent:(long long)arg1 ;
-(id)initWithTaskIdentifier:(id)arg1 assetObjectID:(id)arg2 resource:(id)arg3 ;
-(id<PLResourceIdentity>)resourceIdentity;
@end
