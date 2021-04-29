/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSString, NSArray;

@interface PKWebServiceRequest : NSObject <NSSecureCoding> {

	NSMutableArray* _diagnosticReasonsList;
	NSString* _boundInterfaceIdentifier;

}

@property (nonatomic,copy) NSString * boundInterfaceIdentifier;              //@synthesize boundInterfaceIdentifier=_boundInterfaceIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * diagnosticReasons; 
+(BOOL)supportsSecureCoding;
+(id)_HTTPBodyWithDictionary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)boundInterfaceIdentifier;
-(void)setBoundInterfaceIdentifier:(NSString *)arg1 ;
-(id)_murlRequestWithURL:(id)arg1 ;
-(id)_murlRequestWithServiceURL:(id)arg1 endpointComponents:(id)arg2 queryParameters:(id)arg3 appleAccountInformation:(id)arg4 ;
-(id)_murlRequestWithURL:(id)arg1 appleAccountInformation:(id)arg2 ;
-(void)addDiagnosticReason:(id)arg1 ;
-(NSArray *)diagnosticReasons;
@end

