/**
 * PPRetailInvoicingService.h
 *
 * DO NOT EDIT THIS FILE! IT IS AUTOMATICALLY GENERATED AND SHOULD NOT BE CHECKED IN.
 * Generated from: node_modules/paypal-invoicing/lib/InvoicingService.js
 *
 * 
 */

#import "PayPalRetailSDKTypeDefs.h"
#import "PPRetailObject.h"


@class PPRetailSDK;
@class PPRetailError;
@class PPRetailPayPalErrorInfo;
@class PPRetailAccountSummary;
@class PPRetailAccountSummarySection;
@class PPRetailInvoiceAddress;
@class PPRetailInvoiceAttachment;
@class PPRetailInvoiceBillingInfo;
@class PPRetailInvoiceCCInfo;
@class PPRetailCountries;
@class PPRetailCountry;
@class PPRetailInvoiceCustomAmount;
@class PPRetailInvoice;
@class PPRetailInvoiceActions;
@class PPRetailInvoiceConstants;
@class PPRetailInvoiceListRequest;
@class PPRetailInvoiceListResponse;
@class PPRetailInvoiceMetaData;
@class PPRetailInvoiceTemplatesResponse;
@class PPRetailInvoicingService;
@class PPRetailInvoiceItem;
@class PPRetailInvoiceMerchantInfo;
@class PPRetailInvoiceNotification;
@class PPRetailInvoicePayment;
@class PPRetailInvoicePaymentTerm;
@class PPRetailInvoiceRefund;
@class PPRetailInvoiceSearchRequest;
@class PPRetailInvoiceShippingInfo;
@class PPRetailInvoiceTemplate;
@class PPRetailInvoiceTemplateSettings;
@class PPRetailMerchant;
@class PPRetailNetworkRequest;
@class PPRetailNetworkResponse;
@class PPRetailSdkEnvironmentInfo;
@class PPRetailRetailInvoice;
@class PPRetailRetailInvoicePayment;
@class PPRetailBraintreeManager;
@class PPRetailSimulationManager;
@class PPRetailMerchantManager;
@class PPRetailCaptureHandler;
@class PPRetailTransactionContext;
@class PPRetailTransactionManager;
@class PPRetailTransactionBeginOptions;
@class PPRetailReceiptDestination;
@class PPRetailDeviceManager;
@class PPRetailSignatureReceiver;
@class PPRetailReceiptOptionsViewContent;
@class PPRetailReceiptEmailEntryViewContent;
@class PPRetailReceiptSMSEntryViewContent;
@class PPRetailReceiptViewContent;
@class PPRetailOfflinePaymentStatus;
@class PPRetailOfflinePaymentInfo;
@class PPRetailOfflineTransactionRecord;
@class PPRetailTokenExpirationHandler;
@class PPRetailCard;
@class PPRetailBatteryInfo;
@class PPRetailMagneticCard;
@class PPRetailPaymentDevice;
@class PPRetailManuallyEnteredCard;
@class PPRetailDeviceUpdate;
@class PPRetailCardInsertedHandler;
@class PPRetailDeviceStatus;
@class PPRetailPayer;
@class PPRetailTransactionRecord;
@class PPRetailVaultRecord;
@class PPRetailAuthorizedTransaction;
@class PPRetailPage;
@class PPRetailDiscoveredCardReader;
@class PPRetailCardReaderScanAndDiscoverOptions;
@class PPRetailDeviceConnectorOptions;
@class PPRetailSimulationOptions;


/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
/**
 * 
 */
@interface PPRetailInvoicingService : PPRetailObject




+(void)getInvoices:(PPRetailInvoiceListRequest* _Nullable)params completionHandler:(PPRetailInvoicingServiceGetInvoicesHandler _Nullable)completionHandler;

    /**
     * Search for a specific invoice or invoices by passing a search object that
     * specifies your * search criteria.
     */
    +(void)searchInvoices:(PPRetailInvoiceSearchRequest* _Nullable)params completionHandler:(PPRetailInvoicingServiceSearchInvoicesHandler _Nullable)completionHandler;

    /**
     * Load the details for a specific invoice given the invoice ID
     */
    +(void)getInvoice:(NSString* _Nullable)invoiceID completionHandler:(PPRetailInvoicingServiceGetInvoiceHandler _Nullable)completionHandler;

+(void)getNextInvoiceNumber:(PPRetailInvoicingServiceGetNextInvoiceNumberHandler _Nullable)completionHandler;

+(void)getAccountSummary:(PPRetailInvoicingServiceGetAccountSummaryHandler _Nullable)completionHandler;

+(void)getTemplates:(PPRetailInvoicingServiceGetTemplatesHandler _Nullable)completionHandler;

+(void)uploadFile:(NSString* _Nullable)fileHandle contentType:(NSString* _Nullable)contentType completionHandler:(PPRetailInvoicingServiceUploadFileHandler _Nullable)completionHandler;






@end
