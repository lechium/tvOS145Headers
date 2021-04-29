/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreML/MLModel.h>
#import <libobjc.A.dylib/MLModeling.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol CoreMLModelSecurityProtocol;
@class NSXPCConnection, NSObject, MLModelDescription, MLModelInterface, MLModelMetadata;

@interface MLSecureModel : MLModel <MLModeling, NSSecureCoding> {

	NSXPCConnection* _connectionToModelSecurityService;
	NSObject*<CoreMLModelSecurityProtocol> _secureModelProxy;

}

@property (nonatomic,retain) NSXPCConnection * connectionToModelSecurityService;                   //@synthesize connectionToModelSecurityService=_connectionToModelSecurityService - In the implementation block
@property (nonatomic,retain) NSObject*<CoreMLModelSecurityProtocol> secureModelProxy;              //@synthesize secureModelProxy=_secureModelProxy - In the implementation block
@property (nonatomic,retain) MLModelDescription * modelDescription; 
@property (readonly) MLModelInterface * interface; 
@property (readonly) MLModelMetadata * metadata; 
+(BOOL)supportsSecureCoding;
+(id)sandboxExtensionPathsForModelURL:(id)arg1 ;
+(id)sandboxExtensionTokenForModelURL:(id)arg1 ;
+(id)modelWithContentsOfURL:(id)arg1 configuration:(id)arg2 decryptCredential:(id)arg3 error:(id*)arg4 ;
+(id)modelWithContentsOfURL:(id)arg1 decryptCredential:(id)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)predictionFromFeatures:(id)arg1 error:(id*)arg2 ;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)predictionsFromBatch:(id)arg1 error:(id*)arg2 ;
-(id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)parameterValueForKey:(id)arg1 error:(id*)arg2 ;
-(NSXPCConnection *)connectionToModelSecurityService;
-(void)setConnectionToModelSecurityService:(NSXPCConnection *)arg1 ;
-(NSObject*<CoreMLModelSecurityProtocol>)secureModelProxy;
-(void)setSecureModelProxy:(NSObject*<CoreMLModelSecurityProtocol>)arg1 ;
@end

