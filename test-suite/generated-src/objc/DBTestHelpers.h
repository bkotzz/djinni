// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from test.djinni

#import "DBAssortedPrimitives.h"
#import "DBColor.h"
#import "DBMapListRecord.h"
#import "DBNestedCollection.h"
#import "DBPrimitiveList.h"
#import "DBSetRecord.h"
#import "DJFuture.h"
#import <Foundation/Foundation.h>
@protocol DBAsyncInterface;
@protocol DBClientInterface;
@protocol DBUserToken;


/**
 * Helper methods used by various different tests.
 * (Second line of multi-line documentation.
 *   Indented third line of multi-line documentation.)
 */
@interface DBTestHelpers : NSObject

/** Method with documentation */
+ (nonnull DBSetRecord *)getSetRecord;

/**
 * Method with long documentation
 * (Second line of multi-line documentation.
 *   Indented third line of multi-line documentation.)
 */
+ (BOOL)checkSetRecord:(nonnull DBSetRecord *)rec;

+ (nonnull DBPrimitiveList *)getPrimitiveList;

+ (BOOL)checkPrimitiveList:(nonnull DBPrimitiveList *)pl;

+ (nonnull DBNestedCollection *)getNestedCollection;

+ (BOOL)checkNestedCollection:(nonnull DBNestedCollection *)nc;

+ (nonnull NSDictionary<NSString *, NSNumber *> *)getMap;

+ (BOOL)checkMap:(nonnull NSDictionary<NSString *, NSNumber *> *)m;

+ (nonnull NSDictionary<NSString *, NSNumber *> *)getEmptyMap;

+ (BOOL)checkEmptyMap:(nonnull NSDictionary<NSString *, NSNumber *> *)m;

+ (nonnull DBMapListRecord *)getMapListRecord;

+ (BOOL)checkMapListRecord:(nonnull DBMapListRecord *)m;

+ (void)checkClientInterfaceAscii:(nullable id<DBClientInterface>)i;

+ (void)checkClientInterfaceNonascii:(nullable id<DBClientInterface>)i;

+ (void)checkClientInterfaceArgs:(nullable id<DBClientInterface>)i;

+ (void)checkEnumMap:(nonnull NSDictionary<NSNumber *, NSString *> *)m;

+ (void)checkEnum:(DBColor)c;

+ (nullable id<DBUserToken>)tokenId:(nullable id<DBUserToken>)t;

+ (nullable id<DBUserToken>)createCppToken;

+ (void)checkCppToken:(nullable id<DBUserToken>)t;

+ (int64_t)cppTokenId:(nullable id<DBUserToken>)t;

+ (void)checkTokenType:(nullable id<DBUserToken>)t
                  type:(nonnull NSString *)type;

+ (nullable NSNumber *)returnNone;

/** Ensures that we generate integer translation code */
+ (nonnull DBAssortedPrimitives *)assortedPrimitivesId:(nonnull DBAssortedPrimitives *)i;

+ (nonnull NSData *)idBinary:(nonnull NSData *)b;

+ (nonnull DJFuture<NSNumber *> *)getAsyncResult;

+ (nonnull DJFuture<NSString *> *)futureRoundtrip:(nonnull DJFuture<NSNumber *> *)f;

+ (nonnull DJFuture<NSNumber *> *)asyncEarlyThrow;

+ (nonnull DJFuture<NSNull *> *)voidAsyncMethod:(nonnull DJFuture<NSNull *> *)f;

+ (nonnull DJFuture<NSString *> *)checkAsyncInterface:(nullable id<DBAsyncInterface>)i;

+ (nonnull DJFuture<NSString *> *)checkAsyncComposition:(nullable id<DBAsyncInterface>)i;

+ (nonnull NSArray<NSString *> *)getOptionalList;

+ (BOOL)checkOptionalList:(nonnull NSArray<NSString *> *)ol;

+ (nonnull NSSet<NSString *> *)getOptionalSet;

+ (BOOL)checkOptionalSet:(nonnull NSSet<NSString *> *)os;

+ (nonnull NSDictionary<NSString *, NSString *> *)getOptionalMap;

+ (BOOL)checkOptionalMap:(nonnull NSDictionary<NSString *, NSString *> *)om;

@end
