/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IDSFoundation/IDSDestination.h>

@class IDSURI;

@interface IDSDestinationDevice : IDSDestination {

	IDSURI* _destinationURI;
	BOOL _isGuest;

}

@property (nonatomic,retain) IDSURI * destinationURI;              //@synthesize destinationURI=_destinationURI - In the implementation block
@property (assign,nonatomic) BOOL isGuest;                         //@synthesize isGuest=_isGuest - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isDeviceURI:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)groupID;
-(id)destinationURIs;
-(id)initWithDeviceURI:(id)arg1 ;
-(id)initWithRapportPublicIdentifierURI:(id)arg1 ;
-(id)initWithIDSDeviceURI:(id)arg1 ;
-(BOOL)isGuest;
-(BOOL)isDevice;
-(id)initWithURI:(id)arg1 isGuest:(BOOL)arg2 ;
-(IDSURI *)destinationURI;
-(void)setDestinationURI:(IDSURI *)arg1 ;
-(void)setIsGuest:(BOOL)arg1 ;
@end

